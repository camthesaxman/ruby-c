int __fastcall sub_8110290(int a1)
{
  int v1; // r4@1
  int v3; // [sp+10h] [bp-4h]@0

  v1 = a1;
  sub_8110254(a1);
  sub_8110158(
    33720300,
    56 * v1 + 33751024,
    *(_WORD *)(56 * v1 + 0x202FFCE),
    v2024D26,
    *((_BYTE *)&gLinkPlayers + 28 * *(_BYTE *)(4 * v1 + 0x2029819) + 26));
  return v3;
}
