int __fastcall sub_812D588(int a1)
{
  int v1; // r4@1
  __int16 v2; // r2@2
  __int16 v3; // r1@2
  signed int v4; // r0@4
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( Random() & 3 )
  {
    v2 = *(_WORD *)(v1 + 4);
    v3 = (v2 & 0x3FF) + 5;
  }
  else
  {
    v2 = *(_WORD *)(v1 + 4);
    v3 = (v2 & 0x3FF) + 4;
  }
  *(_WORD *)(v1 + 4) = v2 & 0xFC00 | v3 & 0x3FF;
  v4 = Random() & 7;
  if ( v4 > 3 )
    v4 = 255 * v4 & 0xFF;
  *(_WORD *)(v1 + 38) = (char)v4;
  *(_DWORD *)(v1 + 28) = sub_812D5E8;
  return v6;
}
