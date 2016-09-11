int sub_80883DC()
{
  int *v0; // r4@1
  int v2; // [sp+0h] [bp-Ch]@1
  int v3; // [sp+8h] [bp-4h]@1

  v0 = &dword_3004B20[10 * (unsigned __int8)FindTaskIdByFunc((int)sub_8088120)];
  LoadWordFromTwoHalfwords((int)v0 + 34, &v2);
  call_via_r0(v2);
  v4000040 = *((_WORD *)v0 + 5);
  v4000044 = *((_WORD *)v0 + 6);
  v4000048 = *((_WORD *)v0 + 7);
  v400004A = *((_WORD *)v0 + 8);
  v4000010 = *((_WORD *)v0 + 9);
  v4000012 = *((_WORD *)v0 + 10);
  return v3;
}
