int __fastcall sub_805C7C4(char a1)
{
  char v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  gpu_pal_allocator_reset__manage_upper_four();
  word_30005A6 = 4607;
  byte_30005A4 = v1;
  pal_patch_for_npc_range((unsigned __int16 *)*(&gUnknown_0837399C + (unsigned __int8)v1), 0, 0xAu);
  return v3;
}
