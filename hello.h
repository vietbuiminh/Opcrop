//Create by Viet....
//But this is still the first program to say hello tow everyone
//...||.......................||...

@interface Hello : NSObject
  - (void) say;
@end

@implementation Hello
  - (void) say {
    NSLog(@"Hello");
}
@end

int main(int argc, char *argv[]){
  @autoreleasepool {;
    [[Hello] say];
  }
   return 0;
}

//Thanks everyone to look for this code
//...||.....................||...
