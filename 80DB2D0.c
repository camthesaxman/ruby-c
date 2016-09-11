int __fastcall sub_80DB2D0(int a1)
{
  int v1; // r2@1
  int v2; // r0@4
  __int16 v3; // r0@5
  int v5; // [sp+0h] [bp-4h]@0

  v1 = a1;
  if ( (signed int)*(_WORD *)(a1 + 46) <= 0 )
  {
    if ( *(_WORD *)(a1 + 34) + (signed int)*(_WORD *)(a1 + 38) <= -32 )
    {
      *(_BYTE *)(a1 + 62) |= 4u;
      v3 = *(_WORD *)(a1 + 52);
      *(_WORD *)(v1 + 52) = v3 + 1;
      if ( v3 > 20 )
        *(_DWORD *)(v1 + 28) = sub_80DB330;
    }
    else
    {
      v2 = *(_WORD *)(a1 + 48) + *(_WORD *)(a1 + 50);
      *(_WORD *)(v1 + 50) = v2;
      *(_WORD *)(v1 + 38) -= v2 << 16 >> 24;
    }
  }
  else
  {
    --*(_WORD *)(a1 + 46);
  }
  return v5;
}
