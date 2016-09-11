int __fastcall sub_80F3E24(int a1)
{
  int v1; // r3@1
  __int16 v2; // r0@2
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( v2008768 )
  {
    *(_WORD *)(a1 + 32) = gUnknown_083E4794[2 * *(_WORD *)(a1 + 46)]
                        + *(_WORD *)(v2008768 + 36)
                        + *(_WORD *)(v2008768 + 32);
    v2 = gUnknown_083E4794[2 * *(_WORD *)(a1 + 46) + 1] + *(_WORD *)(v2008768 + 38) + *(_WORD *)(v2008768 + 34);
  }
  else
  {
    *(_WORD *)(a1 + 32) = gUnknown_083E4794[2 * *(_WORD *)(a1 + 46)] + 40;
    v2 = gUnknown_083E4794[2 * *(_WORD *)(a1 + 46) + 1] + 104;
  }
  *(_WORD *)(v1 + 34) = v2;
  return v4;
}
