int __fastcall sub_8047074(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 46) = 25;
  *(_WORD *)(a1 + 50) = (unsigned __int8)sub_8077ABC(*(_WORD *)(a1 + 58) & 0xFF, 2);
  *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(*(_WORD *)(v1 + 58) & 0xFF, 3) + 24;
  *(_WORD *)(v1 + 56) = -30;
  *(_WORD *)(v1 + 6) = *(_WORD *)(v1 + 58);
  sub_80786EC(v1);
  *(_DWORD *)(v1 + 28) = sub_80470C4;
  return v3;
}
