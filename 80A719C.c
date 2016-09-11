int PrepareBagForWallyTutorial()
{
  unsigned int v0; // r1@1
  char *v1; // r0@2
  int v3; // [sp+8h] [bp-4h]@0

  byte_3000700 = 0;
  v2038559 = 0;
  v0 = 0;
  do
  {
    v1 = &byte_3005D10[4 * v0];
    *v1 = 0;
    v1[1] = 0;
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 4 );
  memcpy(33677312, 33709204, 80);
  memcpy(33681408, 33709364, 64);
  sub_80A9684(33709204, 20);
  sub_80A9684(33709364, 16);
  sub_80A9424(13, 1);
  sub_80A9424(4, 1);
  byte_3000701 = 7;
  SetMainCallback2((int)sub_80A7150);
  return v3;
}
