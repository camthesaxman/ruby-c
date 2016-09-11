signed int sub_8136C40()
{
  signed int v0; // r0@1
  signed int v1; // r4@1

  v0 = ProcessMenuInputNoWrap() << 24;
  v1 = v0 >> 24;
  if ( (unsigned int)(v0 + 0x1000000) >> 24 <= 2 )
  {
    MenuZeroFillScreen();
    BasicInitMenuWindow((int)&gWindowConfig_81E7080);
  }
  return v1;
}
