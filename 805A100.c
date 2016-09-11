int __fastcall sub_805A100(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r6@2
  unsigned __int8 v5; // r0@2
  int v7; // [sp+0h] [bp-14h]@1

  v2 = a1;
  v3 = a2;
  memcpy(&v7, &gUnknown_0830FCA8, 4);
  if ( FieldObjectClearAnimIfSpecialAnimFinished(v3) << 24 )
  {
    v4 = *((_BYTE *)&v7 + ((unsigned int)*(_BYTE *)(v3 + 24) >> 4) - 1);
    v5 = GetFaceDirectionAnimId(v4);
    FieldObjectSetSpecialAnim(v3, v5);
    if ( v4 == *(_BYTE *)(v2 + 10) )
      ++*(_WORD *)(v2 + 12);
    ++*(_WORD *)(v2 + 8);
    if ( (signed int)*(_WORD *)(v2 + 12) > 3 && v4 == (GetOppositeDirection(*(_BYTE *)(v2 + 10)) & 0xFF) )
      ++*(_WORD *)(v2 + 8);
  }
  return 0;
}
