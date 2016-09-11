int __fastcall sub_80D52AC(int a1)
{
  int v1; // r6@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( sub_8078B5C(a1) << 24 )
  {
    *(_WORD *)(v1 + 46) = 0;
    *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
    *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u);
    *(_WORD *)(v1 + 38) = 0;
    *(_WORD *)(v1 + 36) = 0;
    *(_DWORD *)(v1 + 28) = sub_80D5324;
    call_via_r1(v1, sub_80D5324);
  }
  else
  {
    *(_WORD *)(v1 + 36) += sine(*(_WORD *)(v1 + 60), 28);
    *(_WORD *)(v1 + 38) += cosine(*(_WORD *)(v1 + 60), 28);
    *(_WORD *)(v1 + 60) = (*(_WORD *)(v1 + 60) + 20) & 0xFF;
  }
  return v3;
}
