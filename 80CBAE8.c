int __fastcall sub_80CBAE8(int a1)
{
  int v1; // r5@1
  __int16 v2; // r6@1
  __int16 v3; // r2@1
  signed __int16 v4; // r0@2
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  sub_8078764(a1, 0);
  v2 = (unsigned __int8)sub_8077ABC(v202F7C8, 0);
  v3 = (unsigned __int8)sub_8077ABC(v202F7C8, 1u);
  if ( (v202F7C9 ^ 2) == v202F7C8 )
  {
    *(_WORD *)(v1 + 58) = v2;
    *(_WORD *)(v1 + 60) = v3 + 10;
    sub_80CB7EC(v1, 60);
    v4 = 1;
  }
  else
  {
    *(_WORD *)(v1 + 58) = v2;
    *(_WORD *)(v1 + 60) = v3 + 10;
    sub_80CB7EC(v1, 60);
    v4 = 3;
  }
  *(_WORD *)(v1 + 52) = v4;
  *(_WORD *)(v1 + 54) = 60;
  *(_DWORD *)(v1 + 28) = sub_80CBB60;
  return v6;
}
