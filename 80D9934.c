int __fastcall sub_80D9934(int a1)
{
  int v1; // r7@1
  int v2; // r4@2
  __int16 v3; // r6@5
  int v4; // r5@5
  __int16 v5; // r4@5
  unsigned __int8 v6; // r0@5
  int v8; // [sp+14h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 46) )
  {
    v2 = sub_8079BFC(*(_WORD *)(a1 + 54), *(_WORD *)(a1 + 56)) - *(_WORD *)(a1 + 58);
    sub_8079BF4((_WORD *)(v1 + 54), (_WORD *)(v1 + 56), v2);
    v2 >>= 8;
    *(_WORD *)(v1 + 34) = v2;
    if ( (signed __int16)v2 >= -8 )
      --*(_WORD *)(v1 + 46);
    else
      move_anim_8072740(v1);
  }
  else
  {
    v3 = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
    v4 = (unsigned __int8)sub_8077ABC(v202F7C8, 3u);
    v5 = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
    v6 = sub_8077ABC(v202F7C9, 3u);
    *(_WORD *)(v1 + 46) = v5 - v3;
    *(_WORD *)(v1 + 48) = v6 - (_WORD)v4;
    *(_WORD *)(v1 + 50) = 16 * *(_WORD *)(v1 + 32);
    *(_WORD *)(v1 + 52) = 16 * *(_WORD *)(v1 + 34);
    *(_DWORD *)(v1 + 28) = sub_80D99F4;
  }
  return v8;
}
