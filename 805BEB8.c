int __fastcall pal_patch_for_npc_range(unsigned __int16 *a1, unsigned __int8 a2, unsigned __int8 a3)
{
  unsigned __int16 *v3; // r5@1
  unsigned int v4; // r4@1
  unsigned int i; // r6@1
  int v7; // [sp+Ch] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  for ( i = a3; v4 < i; v4 = (v4 + 1) & 0xFF )
  {
    pal_patch_for_npc(*v3, v4);
    ++v3;
  }
  return v7;
}
