int __fastcall sub_8084654(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  char *v5; // r0@2
  char v6; // r0@2

  v3 = a2;
  v4 = a3;
  if ( gSprites[68 * *(_WORD *)(a2 + 16) + 43] == 2 )
  {
    *(_BYTE *)(a3 + 3) &= 0xFBu;
    *(_BYTE *)a3 |= 4u;
    v5 = &gSprites[68 * *(_BYTE *)(a3 + 4)];
    v5[5] = v5[5] & 0xF3 | 8;
    FieldObjectClearAnimIfSpecialAnimFinished((_BYTE *)a3);
    v6 = sub_806084C(*(_BYTE *)(v4 + 24) & 0xF);
    FieldObjectSetSpecialAnim((_BYTE *)v4, v6);
    ++*(_WORD *)(v3 + 8);
  }
  return 0;
}
