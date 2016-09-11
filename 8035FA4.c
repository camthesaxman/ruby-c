int sub_8035FA4()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( (v20239F8 & 6) == 2 )
  {
    byte_3001BAD &= 0xFDu;
    gMain[0] = dword_30042D0;
    SetMainCallback2(dword_3001778);
  }
  sub_80334EC();
  return v1;
}
