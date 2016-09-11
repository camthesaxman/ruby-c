int __fastcall sub_80D26A4(int a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u);
  *(_BYTE *)(v1 + 44) |= 0x80u;
  *(_WORD *)(v1 + 46) = word_3004B00[0];
  *(_WORD *)(v1 + 48) = word_3004B02;
  *(_WORD *)(v1 + 60) = (unsigned __int8)sub_8079E90(v202F7C8);
  *(_DWORD *)(v1 + 28) = sub_80D2704;
  call_via_r1(v1, sub_80D2704);
  return v3;
}
