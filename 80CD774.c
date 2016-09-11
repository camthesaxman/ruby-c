int __fastcall sub_80CD774(int a1)
{
  int v1; // r3@1
  int (*v2)(); // r0@7
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  *(_BYTE *)(a1 + 62) |= 4u;
  *(_WORD *)(a1 + 46) = 0;
  if ( word_3004B00[0] == 1 )
  {
    v2 = sub_80CD8A8;
  }
  else if ( word_3004B00[0] > 1 )
  {
    if ( word_3004B00[0] != 2 )
      goto _080CD7C0;
    v2 = sub_80CD8F8;
  }
  else
  {
    if ( word_3004B00[0] )
    {
_080CD7C0:
      v2 = sub_80CD9B8;
      goto _080CD7C2;
    }
    v2 = sub_80CD7CC;
  }
_080CD7C2:
  *(_DWORD *)(v1 + 28) = v2;
  return v4;
}
