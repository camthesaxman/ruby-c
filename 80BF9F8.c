int sub_80BF9F8()
{
  __int16 v0; // r0@1
  char v1; // r0@1
  int v3; // [sp+20h] [bp-4h]@0

  GetMonData((int)&dword_3004360[25 * v202E8CC], 2, (int)&gStringVar3);
  GetMonData((int)&dword_3004360[25 * v202E8CC], 2, (int)&gStringVar2);
  v0 = GetMonData((int)&dword_3004360[25 * v202E8CC], 11, 0);
  v1 = GetMonGender();
  GetMonData((int)&dword_3004360[25 * v202E8CC], 0, 0);
  DoNamingScreen(3u);
  return v3;
}
