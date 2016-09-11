int __fastcall sub_80CD6CC(int a1)
{
  int v1; // r3@1
  __int16 v2; // r0@1
  char v3; // r0@4
  char v4; // r1@4
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = word_3004B00[0];
  *(_WORD *)(v1 + 6) = word_3004B00[0];
  if ( v2 == 1 )
  {
    *(_WORD *)(v1 + 32) -= 24;
    *(_WORD *)(v1 + 34) -= 24;
  }
  else
  {
    if ( v2 == 2 )
    {
      *(_WORD *)(v1 + 32) -= 24;
      *(_WORD *)(v1 + 34) += 24;
      v3 = *(_BYTE *)(v1 + 3) & 0xC1;
      v4 = 32;
    }
    else if ( v2 == 3 )
    {
      *(_WORD *)(v1 + 32) += 24;
      *(_WORD *)(v1 + 34) -= 24;
      v3 = *(_BYTE *)(v1 + 3) & 0xC1;
      v4 = 16;
    }
    else
    {
      *(_WORD *)(v1 + 32) += 24;
      *(_WORD *)(v1 + 34) += 24;
      v3 = *(_BYTE *)(v1 + 3) & 0xC1;
      v4 = 48;
    }
    *(_BYTE *)(v1 + 3) = v3 | v4;
  }
  *(_WORD *)(v1 + 4) = *(_WORD *)(v1 + 4) & 0xFC00 | ((*(_WORD *)(v1 + 4) & 0x3FF) + 16) & 0x3FF;
  *(_DWORD *)(v1 + 28) = sub_80CD3E0;
  call_via_r1(v1, sub_80CD3E0);
  return v6;
}
