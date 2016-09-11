int __fastcall sub_80CE09C(int a1)
{
  int v1; // r6@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( !*(_WORD *)(a1 + 46) )
  {
    *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 0) + word_3004B00[0];
    *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C8, 1u) + word_3004B02;
    if ( sub_8076BE0() << 24 )
      *(_WORD *)(v1 + 34) += 10;
    ++*(_WORD *)(v1 + 46);
  }
  if ( (unsigned __int16)word_3004B0E == 0xFFFF )
    move_anim_8072740(v1);
  return v3;
}
