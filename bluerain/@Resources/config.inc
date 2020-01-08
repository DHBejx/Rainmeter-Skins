[Variables]

    ;[Colors]

        fontColor =FFFFFF
        backgroundColor = 1B1B1B
        AccentBorder = #fontColor#11
        customColor =FFFFFF

    ;[Fonts]

        fontMain = montserrat
        fontMainBold = montserrat semibold
        fontMainLight = montserrat light

    ;[Disks]

        Disk1=C
        Disk2=F
        Disk3=G
        Disk4=D
    
    ;[HWiNFO]
        ; If any of the graphs don't work and aren't picking up data, run the application "HWiNFOSharedMemoryViewer.exe"
        ; in the @Resources directory.
        ; Find the data that you are after and amend the registers below.
        ; As an example, I have an nVidia GTX1070, so look down the list until I find that, then open the tree view.
        ; I want to set the GPU load, so look for "GPU Core Load" and click on that.
        ; For me, that shows:
        ;		ID: 0xe0002000
        ;		Instance: 0x0
        ;		ID: 0x7000000

        ; GPU FAN
            GPUFANSensorId=0xe0002000
            GPUFANSensorInstance=0x0
            GPUFANEntryId=0x8000000

        ; GPU Temp
            GPUTEMPSensorId=0xe0002000
            GPUTEMPSensorInstance=0x0
            GPUTEMPEntryId=0x1000000

        ; GPU Load
            GPULOADSensorId=0xe0002000
            GPULOADSensorInstance=0x0
            GPULOADEntryId=0x7000000

        ; CPU Temp
            CPUTEMPSensorId=0xF0000400
            CPUTEMPSensorInstance=0x0
            CPUTEMPEntryId=0x10000ff

;[styles]

    [HexFont]   
        FontFace = #fontMainBold#
        FontColor = #fontColor#
        StringAlign = CenterCenter
        StringEffect = Border
        FontEffectColor = #AccentBorder#
        AntiAlias = 1
        ClipString = 1

    [ClockFont]   
        FontFace = #fontMainBold#
        FontColor = #fontColor#55
        StringAlign = CenterCenter
        x = ([Background:w] / 2)
        AntiAlias = 1

    [HexBG]
        ImageName = #@#images/bg2.png
        AntiAlias = 1
        Updatedivider = -1 ;Backgrounds need no updates
        w = 100
        h = 100

    ;Graphpositioning inside Hexsize 100x100
    ;For right positioning: [graph:x] = ([hex:x] + 7) and [graph:y] = ([hex:y] + 25)
    ;For the databackground use a Linemeter ontop of a Histogram with the same measure
    [Graph]
        LineWidth = 2 ;Ignored on Histograms
        AntiAlias = 1
        Autoscale = 1
        w = 86
        h = 50

    [ClockHand]
        w = ([Background:w])
        h = ([Background:h])
        OffSetX = ([Background:w] / 2)
        OffSetY = ([Background:h] / 2)
        StartAngle=6.2832
        RotationAngle=6.2832
        AntiAlias = 1

    ;for 100x100 hex
    [Mask]
        ImageName = #@#images/mask.png
        x = 0r
        y = 0r
        w = 60
        h = 60
        AntiAlias = 1
        UpdateDivider = -1

        
