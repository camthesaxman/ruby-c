int __fastcall sub_804AA0C(int a1)
{
  int v1; // r4@1
  char v2; // r6@1
  char v3; // r5@1
  int v4; // ST00_4@1
  int v6; // [sp+14h] [bp-4h]@0

  v1 = 4 * a1 & 0x3FF;
  v2 = gTradeMessageWindowRects[v1];
  v3 = gTradeMessageWindowRects[v1 + 1];
  v4 = gTradeMessageWindowRects[v1 + 3];
  DrawTextWindow(
    dword_3004824 + 4,
    gTradeMessageWindowRects[v1],
    gTradeMessageWindowRects[v1 + 1],
    gTradeMessageWindowRects[v1 + 2]);
  sub_8003460(
    dword_3004824 + 4,
    *(int *)((char *)&gUnknown_0820C2F0 + v1),
    *(_BYTE *)(dword_3004824 + 122) + 384,
    v2 + 1,
    v3 + 1);
  return v6;
}
