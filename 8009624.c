int __fastcall CalcTimeDifference(int a1, int a2, int a3)
{
  char v3; // r5@1
  char v4; // r6@1
  int v6; // [sp+Ch] [bp-4h]@0

  v3 = *(_BYTE *)(a3 + 4) - *(_BYTE *)(a2 + 4);
  *(_BYTE *)(a1 + 4) = v3;
  v4 = *(_BYTE *)(a3 + 3) - *(_BYTE *)(a2 + 3);
  *(_BYTE *)(a1 + 3) = v4;
  *(_BYTE *)(a1 + 2) = *(_BYTE *)(a3 + 2) - *(_BYTE *)(a2 + 2);
  *(_WORD *)a1 = *(_WORD *)a3 - *(_WORD *)a2;
  if ( v3 & 0x80 )
  {
    *(_BYTE *)(a1 + 4) = v3 + 60;
    *(_BYTE *)(a1 + 3) = v4 - 1;
  }
  if ( (signed int)*(_BYTE *)(a1 + 3) < 0 )
  {
    *(_BYTE *)(a1 + 3) += 60;
    --*(_BYTE *)(a1 + 2);
  }
  if ( (signed int)*(_BYTE *)(a1 + 2) < 0 )
  {
    *(_BYTE *)(a1 + 2) += 24;
    --*(_WORD *)a1;
  }
  return v6;
}
