int __fastcall sub_805A178(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v5; // [sp+0h] [bp-14h]@1

  v2 = a1;
  v3 = a2;
  memcpy(&v5, &gUnknown_0830FCAC, 5);
  if ( FieldObjectClearAnimIfSpecialAnimFinished(v3) << 24 )
  {
    FieldObjectSetSpecialAnim(v3, *((_BYTE *)&v5 + *(_WORD *)(v2 + 12)));
    *(_WORD *)(v2 + 8) = 1;
  }
  return 0;
}
