int __fastcall sub_810F7A8(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( !(++*((_WORD *)v2 + 5) % (signed int)*((_WORD *)v2 + 9)) )
  {
    *((_WORD *)v2 + 5) = 0;
    ++*((_WORD *)v2 + 6);
    if ( !*((_WORD *)v2 + 7) )
    {
      *((_WORD *)v2 + 4) = -*((_WORD *)v2 + 4);
      *((_WORD *)v2 + 8) = -*((_WORD *)v2 + 8);
      SetCameraPanning(*((_WORD *)v2 + 4), *((_WORD *)v2 + 8));
      if ( *((_WORD *)v2 + 6) == 8 )
      {
        sub_810F814(v1);
        InstallCameraPanAheadCallback();
      }
    }
  }
  return v4;
}
