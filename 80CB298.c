int __fastcall sub_80CB298(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( (unsigned __int16)word_3004B0E == 0xFFFF )
  {
    *(_BYTE *)(a1 + 44) &= 0x7Fu;
    obj_id_for_side_relative_to_move(1);
    *(_WORD *)(v1 + 46) = 256;
    *(_DWORD *)(v1 + 28) = sub_80CB2D4;
  }
  return v3;
}
