int __fastcall sub_80D986C(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 == 180 )
  {
    v4000050 = 0;
    *(_WORD *)(v1 + 46) = 16;
    *(_WORD *)(v1 + 48) = *(_WORD *)(v1 + 32);
    *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(*(_BYTE *)(v1 + 60), 2u);
    *(_WORD *)(v1 + 52) = *(_WORD *)(v1 + 34);
    *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(*(_BYTE *)(v1 + 60), 3u);
    obj_translate_based_on_private_1_2_3_4(v1);
    oamt_set_x3A_32(v1, (int)move_anim_8074EE0);
    *(_DWORD *)(v1 + 28) = sub_8078BB8;
  }
  return v4;
}
