int __fastcall sub_80DC068(int a1)
{
  int v1; // r5@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( !word_3004B00[0] )
  {
    *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
    *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u);
  }
  *(_WORD *)(v1 + 46) = word_3004B02;
  *(_DWORD *)(v1 + 28) = sub_80DC020;
  return v3;
}
