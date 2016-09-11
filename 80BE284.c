int __fastcall sub_80BE284(char a1)
{
  char v1; // r4@1
  int v3; // [sp+10h] [bp-4h]@0

  v1 = a1;
  byte_3005D38 = sub_80BF720(33717868);
  if ( byte_3005D38 != -1 )
  {
    v20281DF = ((v20281DF & 0x9F | 32 * (v1 & 3)) & 0xF8 | v203869C & 7) & 0xE7 | 8 * (v203869E & 3);
    v20281CE = GetMonData((int)&dword_3004360[25 * v2038694], 11, 0);
    GetMonData((int)&dword_3004360[25 * v2038694], 2, 33718740);
  }
  return v3;
}
