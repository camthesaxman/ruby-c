int __fastcall sub_80C857C(const char *a1, unsigned __int16 a2)
{
  unsigned __int16 v2; // r4@1
  unsigned __int8 v3; // r0@1
  int v5; // [sp+8h] [bp-4h]@0

  v2 = a2;
  memcpy(33677312, a1, a2);
  v3 = bitmask_all_link_players_but_self();
  SendBlock(v3, (char *)0x201E000, v2);
  return v5;
}
