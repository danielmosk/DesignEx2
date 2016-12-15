# DesignEx2

### Usage Example
```objective-c
ToolManager *toolManager = [[ToolManager alloc] init];
SessionStorage *sessionStorage = [[SessionStorage] init];
Texture *inputTexture = [Texture textureWithImage:image]; 

// initialize
ImageSessionManager *imageSessionManager =
    [[ImageSessionManager alloc] initWithImage:inputTexture.image]
                                sessionStorage:sessionStorage];

// Execute
BrightnessTool brightnessTool = [[BrightnessTool alloc] init];
[toolManager activateTool:brightnessTool];
brightnessTool.value = 0.5;
outputTexture = [brightnessTool performOnTexture:inputTexture];

// Save the create operation
[imageSessionManager addOperation:[[CreationOperation alloc] initWithTool:brightnessTool]];

// Change value - slider event (onTouchUp)
brightnessTool.value = 0.7;
outputTexture = [brightnessTool performOnTexture:inputTexture];

// Save the update operation
[imageSessionManager addOperation:[[UpdatingOperation alloc] initWithTool:brightnessTool]];

// Undo operation
[imageSessionManager undowithCallback:^(operation, error){
  [toolManager doOperation:operation];   //{"update brightness_0 value:0.5"}
};

// Redo operation
[imageSessionManager redowithCallback:^(operation, error){
  [toolManager doOperation:operation]   //{"update brightness_0 value:0.7"}
};

// Save session
[imageSessionManager saveSessions] // [SessionStorage saveSessions: ]

// SHUTDOWN

// Restore session
[imageSessionManager loadSessions]

// Restore image
inputTexture = imageSessionManager.texture: //
// Undo/Redo loop
[imageSessionManager redowithCallback:^(operation, error){
  [toolManager doOperation:operation];
};

```
