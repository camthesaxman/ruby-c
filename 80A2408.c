int __fastcall sub_80A2408(unsigned __int8 a1)
{
  _BYTE *v1; // r4@1
  unsigned int v2; // r5@1
  int v3; // r0@2
  int v5; // [sp+8h] [bp-4h]@0

  v1 = &byte_3004B28[40 * a1 + 2];
  v2 = 0;
  do
  {
    v3 = *v1;
    if ( v3 != 255 )
      npc_sync_anim_pause_bits((int)&dword_30048A0[9 * v3]);
    v2 = (v2 + 1) & 0xFF;
    ++v1;
  }
  while ( v2 <= 0xF );
  return v5;
}
