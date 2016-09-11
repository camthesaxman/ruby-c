int __fastcall sub_80A5FAC(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  __int16 v2; // r0@2
  int v3; // r0@4
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  audio_play(5u);
  if ( v2025BCA == v203855E )
  {
    sub_80A40D0();
    v2 = 0;
  }
  else
  {
    sub_80A413C();
    v2 = v203855E;
  }
  v2025BCA = v2;
  sub_80A7528(0);
  v3 = sub_80A41D4();
  sub_80A736C(v3);
  sub_80A37C0(v1);
  return v5;
}
