int __fastcall sub_80CF158(int a1)
{
  int v1; // r2@1
  __int16 v2; // r1@1
  __int16 v3; // r0@2
  int v5; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48) + 4;
  *(_WORD *)(a1 + 48) = v2;
  if ( v2 > 254 )
  {
    v3 = *(_WORD *)(a1 + 46) - 1;
    *(_WORD *)(v1 + 46) = v3;
    if ( !v3 )
    {
      *(_WORD *)(v1 + 36) = 0;
      *(_DWORD *)(v1 + 28) = sub_80CF088;
      return v5;
    }
    *(_WORD *)(v1 + 48) = (unsigned __int8)v2;
  }
  if ( (signed int)*(_WORD *)(v1 + 48) > 79 )
    *(_BYTE *)(v1 + 67) = *(_WORD *)(v1 + 52);
  if ( (signed int)*(_WORD *)(v1 + 48) > 159 )
    *(_BYTE *)(v1 + 67) = *(_WORD *)(v1 + 50);
  *(_WORD *)(v1 + 36) = (gSineTable[*(_WORD *)(v1 + 48)] << 16 >> 19) + (gSineTable[*(_WORD *)(v1 + 48)] << 16 >> 20);
  return v5;
}
