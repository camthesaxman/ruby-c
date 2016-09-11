int __fastcall sub_80E0F84(int a1)
{
  int v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( sub_8078718(a1) << 24 )
  {
    *(_WORD *)(v1 + 32) += *(_WORD *)(v1 + 36);
    *(_WORD *)(v1 + 34) += *(_WORD *)(v1 + 38);
    *(_WORD *)(v1 + 38) = 0;
    *(_WORD *)(v1 + 36) = 0;
    *(_WORD *)(v1 + 46) = 20;
    *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
    *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u);
    *(_WORD *)(v1 + 56) = 40;
    sub_80786EC(v1);
    *(_DWORD *)(v1 + 28) = sub_80E0FE8;
  }
  return v3;
}
