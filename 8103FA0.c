signed int sub_8103FA0()
{
  unsigned __int8 v0; // r0@1
  signed int result; // r0@2

  v0 = FindTaskIdByFunc((int)sub_8103FE8);
  if ( LOWORD(dword_3004B20[10 * v0 + 3]) )
  {
    result = 0;
  }
  else
  {
    DestroyTask(v0);
    LoadPalette(149510712, 16, 32);
    result = 1;
  }
  return result;
}
