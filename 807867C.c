int __fastcall sub_807867C(int a1, int a2)
{
  int v2; // r4@1
  unsigned int v3; // r1@1
  unsigned int v4; // r5@1
  unsigned int v5; // r8@1
  unsigned int v6; // r6@1
  unsigned int v7; // r0@1
  unsigned int v8; // r0@3
  int v10; // [sp+14h] [bp-4h]@0

  v2 = a1;
  v3 = a2 << 16;
  v4 = v3 >> 16;
  v5 = v3 >> 16;
  v6 = (unsigned __int8)sub_8077ABC(v202F7C8, 0);
  v7 = (unsigned __int8)sub_8077ABC(v202F7C9, 0);
  if ( v6 <= v7 )
  {
    if ( v6 < v7 )
    {
      v8 = v4 << 16;
_080786D8:
      *(_WORD *)(v2 + 32) += HIWORD(v8);
      return v10;
    }
    if ( !(battle_side_get_owner(v202F7C8) << 24) )
    {
      v8 = v5 << 16;
      goto _080786D8;
    }
  }
  *(_WORD *)(v2 + 32) -= v4;
  return v10;
}
