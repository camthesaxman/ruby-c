int __fastcall sub_80DE3AC(unsigned __int8 a1)
{
  int *v1; // r1@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 19) = 0;
  *v1 = (int)sub_80DE3D4;
  call_via_r2(a1, v1, sub_80DE3D4);
  return v3;
}
