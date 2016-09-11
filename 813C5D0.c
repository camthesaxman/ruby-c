int __fastcall sub_813C5D0(unsigned __int8 a1)
{
  int *v1; // r3@1
  __int16 v2; // r1@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 4);
  if ( *((_WORD *)v1 + 4) == 32 )
  {
    v4000044 = 8320;
    *v1 = (int)sub_813C624;
  }
  else
  {
    *((_WORD *)v1 + 4) = v2 + 4;
    v4000044 = (LOWORD(dword_3004B20[10 * a1 + 2]) << 8) - (v2 - 156);
  }
  return v4;
}
