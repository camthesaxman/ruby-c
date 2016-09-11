int __fastcall sub_80D5254(int a1)
{
  int v1; // r5@1
  __int16 v2; // r0@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  sub_80D5348();
  v2 = *(_WORD *)(v1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 == 18 )
  {
    *(_WORD *)(v1 + 46) = 25;
    *(_WORD *)(v1 + 48) = *(_WORD *)(v1 + 32);
    *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
    *(_WORD *)(v1 + 52) = *(_WORD *)(v1 + 34);
    *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u);
    obj_translate_based_on_private_1_2_3_4(v1);
    *(_DWORD *)(v1 + 28) = sub_80D52AC;
  }
  return v4;
}
