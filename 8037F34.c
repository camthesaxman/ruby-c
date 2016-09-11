int sub_8037F34()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( !(v202F38F & 0x80) )
  {
    if ( v20239F8 & 2 )
    {
      sub_800832C();
      dword_3004330[v2024A60] = (int)sub_8037EF0;
    }
    else
    {
      m4aSongNumStop(90);
      byte_3001BAD &= 0xFDu;
      gMain[0] = dword_30042D0;
      SetMainCallback2(dword_3001778);
    }
  }
  return v1;
}
