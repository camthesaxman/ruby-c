int __fastcall sub_80AE6E4(unsigned __int8 a1, char a2)
{
  int v3; // [sp+14h] [bp-4h]@0

  v20238CC = -4;
  v20238CD = 6;
  v20238CE = 4;
  *PutWindowTilemap((_BYTE *)0x20238CF, (_BYTE *)((a1 << 6) + 33785202), a2) = -1;
  sub_8004D04(
    (int)&unk_3004210,
    33700044,
    (1310720 * (unsigned int)*(_BYTE *)(a1 + 0x2038696) + 0x2000000) >> 16,
    (((unsigned int)(unsigned __int8)gUnknown_083CA308[2 * *(_BYTE *)(a1 + 0x2038696)] << 27) - 50331648) >> 24,
    8 * (unsigned __int8)byte_83CA309[2 * *(_BYTE *)(a1 + 0x2038696)],
    1);
  return v3;
}
