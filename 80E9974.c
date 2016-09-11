int sub_80E9974()
{
  int i; // r4@2
  int v2; // [sp+Ch] [bp-4h]@0

  BasicInitMenuWindow((int)&gWindowConfig_81E6D54);
  if ( v2001026 )
  {
    sub_80E9AD4(v2001026);
    sub_80E9A60(&gUnknown_083DBEAC, 2, 0);
    sub_80E9A60(&unk_83DBECC, 2, 2);
    sub_80E9A60(&unk_83DBEEC, 2, 4);
    sub_80E9A60(&unk_83DBF0C, 2, 6);
  }
  else
  {
    for ( i = v20011B5 & 0xFFFF; i < v20011B5 + 4; i = (i + 1) & 0xFFFF )
      sub_80E9940(33598921, i);
  }
  return v2;
}
