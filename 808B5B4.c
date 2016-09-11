int __fastcall sub_808B5B4(int a1)
{
  int *v1; // r1@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  dword_3005CF0 = *v1;
  *v1 = (int)sub_808B5E4;
  call_via_r2((unsigned __int8)a1, v1, sub_808B5E4);
  return v3;
}
