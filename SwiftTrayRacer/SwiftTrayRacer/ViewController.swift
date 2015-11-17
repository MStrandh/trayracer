//
//  ViewController.swift
//  SwiftTrayRacer
//
//  Created by Magnus Strandh on 14/03/15.
//  Copyright (c) 2015 Magnus Strandh. All rights reserved.
//

import Cocoa

class ViewController: NSViewController {
    
    @IBOutlet weak var trayRacerImageView : NSImageView?

    override func viewDidLoad() {
        super.viewDidLoad()

        let filePath = getPathForFileInBundle("scene1")
        createTrayRacer(filePath)

        let image = createImage(320, imageHeight: 240)
        trayRacerImageView?.image = image
        
        destroyTrayRacer()
    }

    override var representedObject: AnyObject? {
        didSet {
        // Update the view, if already loaded.
        }
    }
    
    func createImage(imageWidth: Int, imageHeight: Int) -> (NSImage) {
        let imageData : UnsafePointer<CUnsignedChar> = getTrayRacerImage()
        let imageRef = convertBitmapRGBA8ToUIImage(imageWidth, height: imageHeight, buffer: imageData)

        let imageSize = NSSize(width: Int(imageWidth), height: Int(imageHeight))
        let image = NSImage(CGImage: imageRef, size: imageSize)
        
        return image
    }
    
    func getPathForFileInBundle(fileName: String) -> (String) {
        let fileRoot = NSBundle.mainBundle().pathForResource(fileName, ofType: "test")
        
        return fileRoot!
    }
    
    func convertBitmapRGBA8ToUIImage(width: Int, height: Int, buffer: UnsafePointer<CUnsignedChar>) -> (CGImage) {
        
        let bufferLength: Int = width * height * 4
        let provider = CGDataProviderCreateWithData(nil, buffer, bufferLength, nil)
        
        let bitsPerComponent: Int = 8
        let bitsPerPixel: Int = 32
        let bytesPerRow = width * 4
        
        let colorSpaceRef = CGColorSpaceCreateDeviceRGB()
        
        if colorSpaceRef == nil {
            print("Failed to create color space")
            // TODO: Clean up
        }
        
        let bitmapInfo = CGBitmapInfo(rawValue: CGBitmapInfo.ByteOrderDefault.rawValue | CGImageAlphaInfo.PremultipliedLast.rawValue)
        
        let renderingIntent = CGColorRenderingIntent.RenderingIntentDefault
        
        return CGImageCreate(
            width,
            height,
            bitsPerComponent,
            bitsPerPixel,
            bytesPerRow,
            colorSpaceRef,
            bitmapInfo,
            provider,
            nil,
            true,
            renderingIntent)!
    }
}

