int sub_80977E4()
{
  int v0; // r0@6
  int v1; // r0@6
  int v3; // [sp+4h] [bp-4h]@0

  if ( v2000004 )
  {
    if ( v2000004 == 1 && !(sub_80F7500() << 24) )
    {
      v0 = sub_80F7470();
      sub_8098A5C(v0);
      v1 = sub_809BDD8(v20012C0);
      sub_809801C(v1);
      sub_8096BE0((int)sub_8096C84);
    }
  }
  else
  {
    sub_8098898(12);
    v20012C0 = v20011F7;
    sub_80F7418(v20011F7, 176, 16);
    ++v2000004;
  }
  return v3;
}
