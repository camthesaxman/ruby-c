_BOOL4 __fastcall sub_80A2B94(int a1, int a2, int a3)
{
  int v3; // r4@1
  unsigned __int16 v4; // r0@1
  int v5; // r1@1
  int v6; // r2@1
  int v7; // r3@1
  int v8; // r2@1

  v3 = a1;
  v4 = GetMonData(a1, 12, a3);
  return itemid_is_mail(v4, v5, v6, v7) << 24 && GetMonData(v3, 64, v8) != 255;
}
