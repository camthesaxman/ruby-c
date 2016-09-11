int __fastcall sub_81323E0(int a1)
{
  int v1; // r5@1
  __int16 v2; // r0@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
  v2 = sub_807A100(v202F7C8, 2u);
  *(_WORD *)(v1 + 34) = v2;
  if ( v2 <= 15 )
    *(_WORD *)(v1 + 34) = 16;
  *(_WORD *)(v1 + 58) = 0;
  *(_WORD *)(v1 + 60) = 16;
  *(_DWORD *)(v1 + 28) = sub_8132430;
  v4000052 = 4096;
  return v4;
}
