int __fastcall RtcGetInfo(int a1)
{
  int v2; // [sp+4h] [bp-4h]@0

  if ( sErrorStatus & 0xFF0 )
  {
    *(_DWORD *)a1 = 65792;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
  else
  {
    RtcGetRawInfo(a1);
  }
  return v2;
}
