int sub_8082034()
{
  int v0; // r5@1
  int v1; // r2@1
  unsigned int v2; // r4@1
  int v3; // r1@1
  int v4; // r2@1
  int v5; // r1@2
  _BYTE *v6; // r0@2

  v0 = (unsigned __int8)sub_8081E90();
  v2 = (unsigned __int8)GetMonData((int)&unk_30045C0, 56, v1);
  if ( v2 < (unsigned __int8)sub_8081EF4(1u, v3, v4) )
  {
    v6 = &gUnknown_0839ACF8;
    v5 = 2 * v0;
  }
  else
  {
    v5 = 2 * v0;
    v6 = &unk_839ACF9;
  }
  return v6[v5];
}
