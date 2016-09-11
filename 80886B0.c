int sub_80886B0()
{
  int *v0; // r4@1
  int v2; // [sp+0h] [bp-Ch]@1
  int v3; // [sp+8h] [bp-4h]@1

  v0 = &dword_3004B20[10 * (unsigned __int8)FindTaskIdByFunc((int)sub_808847C)];
  LoadWordFromTwoHalfwords((int)v0 + 34, &v2);
  call_via_r0(v2);
  v4000010 = *((_WORD *)v0 + 5);
  v4000012 = *((_WORD *)v0 + 6);
  return v3;
}
